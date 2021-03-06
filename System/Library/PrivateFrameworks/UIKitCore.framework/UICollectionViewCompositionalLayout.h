/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKitCore/_UICollectionViewLayoutInteractionStateModuleHost.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult;
@class UICollectionViewCompositionalLayoutConfiguration, _UICollectionViewLayoutInteractionStateModule, NSCollectionLayoutSection, _UICollectionCompositionalLayoutSolver, _UIDataSourceSnapshotter, _UIUpdateVisibleCellsContext, _UICollectionCompositionalLayoutSolverUpdate, NSString;

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost> {

	UICollectionViewCompositionalLayoutConfiguration* _configuration;
	_UICollectionViewLayoutInteractionStateModule* _interactionStateModule;
	BOOL _defersInitialSolveUntilPrepare;
	BOOL _shouldAdjustContentInsetModeForCollectionViewNeverMode;
	BOOL _isInUpdateVisibleCellsPass;
	BOOL _deferredLastInvalidationNextInvalidationRequiresFullResolve;
	BOOL _layoutRTL;
	BOOL _roundsToScreenScale;
	NSCollectionLayoutSection* _layoutSectionTemplate;
	/*^block*/id _layoutSectionProvider;
	_UICollectionCompositionalLayoutSolver* _solver;
	_UIDataSourceSnapshotter* _dataSourceSnapshotter;
	unsigned long long _edgesForSafeAreaPropagation;
	_UIUpdateVisibleCellsContext* _updateVisibleCellsContext;
	_UICollectionCompositionalLayoutSolverUpdate* _currentUpdate;
	id<_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
	/*^block*/id _dynamicsConfigurationHandler;
	CGSize _memoizedPreviousSolvedViewBoundsSize;
	UIEdgeInsets _memoizedDynamicAnimatorWorldAdjustingInsets;
	UIEdgeInsets _memoizedPreviousLayoutMargins;
	CGRect _contentFrame;

}

@property (nonatomic,retain) NSCollectionLayoutSection * layoutSectionTemplate;                                         //@synthesize layoutSectionTemplate=_layoutSectionTemplate - In the implementation block
@property (nonatomic,copy) id layoutSectionProvider;                                                                    //@synthesize layoutSectionProvider=_layoutSectionProvider - In the implementation block
@property (nonatomic,retain) _UICollectionCompositionalLayoutSolver * solver;                                           //@synthesize solver=_solver - In the implementation block
@property (assign,nonatomic) BOOL defersInitialSolveUntilPrepare;                                                       //@synthesize defersInitialSolveUntilPrepare=_defersInitialSolveUntilPrepare - In the implementation block
@property (assign,nonatomic) UIEdgeInsets memoizedDynamicAnimatorWorldAdjustingInsets;                                  //@synthesize memoizedDynamicAnimatorWorldAdjustingInsets=_memoizedDynamicAnimatorWorldAdjustingInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets memoizedPreviousLayoutMargins;                                                //@synthesize memoizedPreviousLayoutMargins=_memoizedPreviousLayoutMargins - In the implementation block
@property (assign,nonatomic) CGSize memoizedPreviousSolvedViewBoundsSize;                                               //@synthesize memoizedPreviousSolvedViewBoundsSize=_memoizedPreviousSolvedViewBoundsSize - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshotter;                                          //@synthesize dataSourceSnapshotter=_dataSourceSnapshotter - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustContentInsetModeForCollectionViewNeverMode;                               //@synthesize shouldAdjustContentInsetModeForCollectionViewNeverMode=_shouldAdjustContentInsetModeForCollectionViewNeverMode - In the implementation block
@property (assign,nonatomic) unsigned long long edgesForSafeAreaPropagation;                                            //@synthesize edgesForSafeAreaPropagation=_edgesForSafeAreaPropagation - In the implementation block
@property (assign,nonatomic) BOOL isInUpdateVisibleCellsPass;                                                           //@synthesize isInUpdateVisibleCellsPass=_isInUpdateVisibleCellsPass - In the implementation block
@property (assign,nonatomic) BOOL deferredLastInvalidationNextInvalidationRequiresFullResolve;                          //@synthesize deferredLastInvalidationNextInvalidationRequiresFullResolve=_deferredLastInvalidationNextInvalidationRequiresFullResolve - In the implementation block
@property (nonatomic,retain) _UIUpdateVisibleCellsContext * updateVisibleCellsContext;                                  //@synthesize updateVisibleCellsContext=_updateVisibleCellsContext - In the implementation block
@property (nonatomic,retain) _UICollectionCompositionalLayoutSolverUpdate * currentUpdate;                              //@synthesize currentUpdate=_currentUpdate - In the implementation block
@property (nonatomic,retain) id<_UICollectionCompositionalLayoutSolverResolveResult> currentResolveResult;              //@synthesize currentResolveResult=_currentResolveResult - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                                                            //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) BOOL roundsToScreenScale;                                                                  //@synthesize roundsToScreenScale=_roundsToScreenScale - In the implementation block
@property (nonatomic,copy) id dynamicsConfigurationHandler;                                                             //@synthesize dynamicsConfigurationHandler=_dynamicsConfigurationHandler - In the implementation block
@property (nonatomic,copy) UICollectionViewCompositionalLayoutConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutWithListConfiguration:(id)arg1 ;
-(void)setMemoizedPreviousLayoutMargins:(UIEdgeInsets)arg1 ;
-(CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1 ;
-(CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1 ;
-(id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
-(unsigned long long)edgesForSafeAreaPropagation;
-(BOOL)_estimatesSizes;
-(void)setContentFrame:(CGRect)arg1 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_boundsChangeResolve;
-(CGSize)memoizedPreviousSolvedViewBoundsSize;
-(id)_layoutSectionForSectionIndex:(unsigned long long)arg1 ;
-(void)setDefersInitialSolveUntilPrepare:(BOOL)arg1 ;
-(id)_contentInsetsEnvironmentFromCollectionViewForInsetsReference:(long long)arg1 ;
-(BOOL)defersInitialSolveUntilPrepare;
-(void)_computeAndUpdateAdjustedContentFrame;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)setEdgesForSafeAreaPropagation:(unsigned long long)arg1 ;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1 ;
-(BOOL)canBeEdited;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(id)_dataSourceSnapshotter;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1 ;
-(BOOL)shouldAdjustContentInsetModeForCollectionViewNeverMode;
-(id)initWithSection:(id)arg1 configuration:(id)arg2 ;
-(CGRect)contentFrame;
-(void)prepareLayout;
-(id)_orthogonalScrollingSections;
-(_UIDataSourceSnapshotter *)dataSourceSnapshotter;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)_containerFromCollectionView;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)_marginsChangeResolve;
-(UIEdgeInsets)memoizedPreviousLayoutMargins;
-(void)setMemoizedPreviousSolvedViewBoundsSize:(CGSize)arg1 ;
-(unsigned long long)_layoutAxis;
-(UIEdgeInsets)memoizedDynamicAnimatorWorldAdjustingInsets;
-(BOOL)_shouldInvalidateLayoutForBoundsSizeChange:(CGRect)arg1 ;
-(BOOL)_estimatesSupplementaryItems;
-(id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2 ;
-(CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)_handleSwipeActionsInvalidationWithContext:(id)arg1 ;
-(BOOL)_overridesSafeAreaPropagationToDescendants;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(CGPoint)arg1 ;
-(BOOL)_allowsItemInteractionsToBegin;
-(_UIUpdateVisibleCellsContext *)updateVisibleCellsContext;
-(BOOL)deferredLastInvalidationNextInvalidationRequiresFullResolve;
-(void)setCurrentResolveResult:(id<_UICollectionCompositionalLayoutSolverResolveResult>)arg1 ;
-(void)_fullResolve;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(void)setBoundarySupplementaryItems:(id)arg1 ;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(void)_setCollectionView:(id)arg1 ;
-(void)setSolver:(_UICollectionCompositionalLayoutSolver *)arg1 ;
-(id)dynamicsConfigurationHandler;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1 ;
-(void)setIsInUpdateVisibleCellsPass:(BOOL)arg1 ;
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(void)_solveForPinnedSupplementaryItemsIfNeededWithContext:(id)arg1 ;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)_createSwipeActionsModuleIfNeeded;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(_UICollectionCompositionalLayoutSolver *)solver;
-(void)setMemoizedDynamicAnimatorWorldAdjustingInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1 ;
-(id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(CGRect)arg1 ;
-(BOOL)isInUpdateVisibleCellsPass;
-(NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1 ;
-(NSCollectionLayoutSection *)layoutSectionTemplate;
-(void)setUpdateVisibleCellsContext:(_UIUpdateVisibleCellsContext *)arg1 ;
-(unsigned long long)_orthogonalScrollingAxis;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_backgroundChangedForInteractionAtIndexPath:(id)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(CGPoint)_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg1 withProposedTargetPosition:(CGPoint)arg2 ;
-(unsigned long long)_edgesForSafeAreaPropagationToDescendants;
-(BOOL)_disallowsFadeCellsForBoundsChange;
-(void)_willBeginSwiping;
-(void)setShouldAdjustContentInsetModeForCollectionViewNeverMode:(BOOL)arg1 ;
-(BOOL)_hasOrthogonalScrollingSections;
-(void)_transformDecorationLayoutAttributes:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(BOOL)_wantsAnimationsForOffscreenAuxillaries;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2 ;
-(id)_propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2 ;
-(id)_endInteractiveReorderingResolveWithContext:(id)arg1 ;
-(void)setLayoutSectionTemplate:(NSCollectionLayoutSection *)arg1 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(id)initWithSection:(id)arg1 sectionProvider:(/*^block*/id)arg2 configuration:(id)arg3 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)finalizeCollectionViewUpdates;
-(void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2 ;
-(BOOL)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(unsigned long long)arg1 container:(id)arg2 ;
-(BOOL)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(CGRect)arg1 preparingLayout:(BOOL)arg2 ;
-(_UICollectionCompositionalLayoutSolverUpdate *)currentUpdate;
-(void)_handlePreferredSizingCustomizationsInvalidation:(id)arg1 ;
-(BOOL)_supportsSwipeActionsForIndexPath:(id)arg1 ;
-(id)_interactionStateModule:(id)arg1 layoutSectionForIndex:(long long)arg2 ;
-(void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2 ;
-(void)setDeferredLastInvalidationNextInvalidationRequiresFullResolve:(BOOL)arg1 ;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(BOOL)roundsToScreenScale;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(double)_interactionStateModule:(id)arg1 spacingAfterLayoutSection:(long long)arg2 ;
-(void)_transformCellLayoutAttributes:(id)arg1 ;
-(void)setCurrentUpdate:(_UICollectionCompositionalLayoutSolverUpdate *)arg1 ;
-(id<_UICollectionCompositionalLayoutSolverResolveResult>)currentResolveResult;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(void)_didEndSwiping;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)_transformSupplementaryLayoutAttributes:(id)arg1 ;
-(BOOL)_preparedForBoundsChanges;
-(CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(id)layoutSectionProvider;
-(void)setDataSourceSnapshotter:(_UIDataSourceSnapshotter *)arg1 ;
-(CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setLayoutSectionProvider:(id)arg1 ;
-(BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
-(void)setDynamicsConfigurationHandler:(id)arg1 ;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(BOOL)_viewBoundsPermitsLayout:(CGRect)arg1 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 ;
-(BOOL)layoutRTL;
-(id)_updateResolve;
-(id)initWithLayoutSection:(id)arg1 ;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1 ;
-(id)boundarySupplementaryItems;
-(long long)scrollDirection;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)isEditing;
-(void)setConfiguration:(UICollectionViewCompositionalLayoutConfiguration *)arg1 ;
-(UICollectionViewCompositionalLayoutConfiguration *)configuration;
-(void)setEditing:(BOOL)arg1 ;
@end

