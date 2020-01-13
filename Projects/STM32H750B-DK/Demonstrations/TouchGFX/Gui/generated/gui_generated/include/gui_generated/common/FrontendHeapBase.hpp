/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDHEAPBASE_HPP
#define FRONTENDHEAPBASE_HPP

#include <common/Meta.hpp>
#include <common/Partition.hpp>
#include <mvp/MVPHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <touchgfx/transitions/SlideTransition.hpp>
#include <touchgfx/transitions/SlideTransition.hpp>
#include <touchgfx/transitions/CoverTransition.hpp>
#include <touchgfx/transitions/SlideTransition.hpp>




#include <touchgfx/transitions/SlideTransition.hpp>






#include <touchgfx/transitions/CoverTransition.hpp>
#include <touchgfx/transitions/CoverTransition.hpp>
#include <touchgfx/transitions/CoverTransition.hpp>




#include <touchgfx/transitions/CoverTransition.hpp>

#include <gui/common/FrontendApplication.hpp>
#include <gui/model/Model.hpp>

#include <gui/hallwayscreen_screen/hallwayScreenView.hpp>
#include <gui/hallwayscreen_screen/hallwayScreenPresenter.hpp>
#include <gui/kitchenscreen_screen/KitchenScreenView.hpp>
#include <gui/kitchenscreen_screen/KitchenScreenPresenter.hpp>
#include <gui/bathtubscreen_screen/BathtubScreenView.hpp>
#include <gui/bathtubscreen_screen/BathtubScreenPresenter.hpp>
#include <gui/bathroomscreen_screen/BathroomScreenView.hpp>
#include <gui/bathroomscreen_screen/BathroomScreenPresenter.hpp>
#include <gui/washerscreen_screen/WasherScreenView.hpp>
#include <gui/washerscreen_screen/WasherScreenPresenter.hpp>
#include <gui/extractorhoodscreen_screen/ExtractorHoodScreenView.hpp>
#include <gui/extractorhoodscreen_screen/ExtractorHoodScreenPresenter.hpp>
#include <gui/recipescreen_screen/RecipeScreenView.hpp>
#include <gui/recipescreen_screen/RecipeScreenPresenter.hpp>
#include <gui/recipeselectedscreen_screen/RecipeSelectedScreenView.hpp>
#include <gui/recipeselectedscreen_screen/RecipeSelectedScreenPresenter.hpp>
#include <gui/ovenscreen_screen/OvenScreenView.hpp>
#include <gui/ovenscreen_screen/OvenScreenPresenter.hpp>
#include <gui/homecontrolscreen_screen/HomeControlScreenView.hpp>
#include <gui/homecontrolscreen_screen/HomeControlScreenPresenter.hpp>
#include <gui/aboutscreen_screen/AboutScreenView.hpp>
#include <gui/aboutscreen_screen/AboutScreenPresenter.hpp>


/**
 * This class provides the memory that shall be used for memory allocations
 * in the frontend. A single instance of the FrontendHeap is allocated once (in heap
 * memory), and all other frontend objects such as views, presenters and data model are
 * allocated within the scope of this FrontendHeap. As such, the RAM usage of the entire
 * user interface is sizeof(FrontendHeap).
 *
 * @note The FrontendHeap reserves memory for the most memory-consuming presenter and
 * view only. The largest of these classes are determined at compile-time using template
 * magic. As such, it is important to add all presenters, views and transitions to the
 * type lists in this class.
 *
 */
class FrontendHeapBase : public touchgfx::MVPHeap
{
public:
    /**
     * A list of all view types. Must end with meta::Nil.
     * @note All view types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< HallwayScreenView,
            touchgfx::meta::TypeList< KitchenScreenView,
            touchgfx::meta::TypeList< BathtubScreenView,
            touchgfx::meta::TypeList< BathroomScreenView,
            touchgfx::meta::TypeList< WasherScreenView,
            touchgfx::meta::TypeList< ExtractorHoodScreenView,
            touchgfx::meta::TypeList< RecipeScreenView,
            touchgfx::meta::TypeList< RecipeSelectedScreenView,
            touchgfx::meta::TypeList< OvenScreenView,
            touchgfx::meta::TypeList< HomeControlScreenView,
            touchgfx::meta::TypeList< AboutScreenView,
            touchgfx::meta::Nil > > > > > > > > > >
            > GeneratedViewTypes;

    /**
     * Determine (compile time) the View type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedViewTypes >::type MaxGeneratedViewType;

    /**
     * A list of all presenter types. Must end with meta::Nil.
     * @note All presenter types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< HallwayScreenPresenter,
            touchgfx::meta::TypeList< KitchenScreenPresenter,
            touchgfx::meta::TypeList< BathtubScreenPresenter,
            touchgfx::meta::TypeList< BathroomScreenPresenter,
            touchgfx::meta::TypeList< WasherScreenPresenter,
            touchgfx::meta::TypeList< ExtractorHoodScreenPresenter,
            touchgfx::meta::TypeList< RecipeScreenPresenter,
            touchgfx::meta::TypeList< RecipeSelectedScreenPresenter,
            touchgfx::meta::TypeList< OvenScreenPresenter,
            touchgfx::meta::TypeList< HomeControlScreenPresenter,
            touchgfx::meta::TypeList< AboutScreenPresenter,
            touchgfx::meta::Nil > > > > > > > > > >
            > GeneratedPresenterTypes;

    /**
     * Determine (compile time) the Presenter type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedPresenterTypes >::type MaxGeneratedPresenterType;

    /**
     * A list of all transition types. Must end with meta::Nil.
     * @note All transition types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< touchgfx::NoTransition,
            touchgfx::meta::TypeList< SlideTransition<WEST>,
            touchgfx::meta::TypeList< SlideTransition<EAST>,
            touchgfx::meta::TypeList< CoverTransition<NORTH>,
            touchgfx::meta::TypeList< CoverTransition<SOUTH>,
            touchgfx::meta::Nil > > > >
            > GeneratedTransitionTypes;

    /**
     * Determine (compile time) the Transition type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedTransitionTypes >::type MaxGeneratedTransitionType;

    virtual void gotoStartScreen(FrontendApplication& app)
    {
        app.gotoHallwayScreenScreenNoTransition();
    }
protected:
    FrontendHeapBase(touchgfx::AbstractPartition& presenters, touchgfx::AbstractPartition& views, touchgfx::AbstractPartition& transitions, FrontendApplication& app)
        : MVPHeap(presenters, views, transitions, app)
    {

    }

};

#endif // FRONTENDHEAPBASE_HPP