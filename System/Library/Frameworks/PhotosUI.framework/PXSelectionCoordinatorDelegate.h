/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXSelectionCoordinatorDelegate <NSObject>
@optional
-(void)selectionCoordinator:(id)arg1 willUpdateSelectedObjectsForSnapshot:(id)arg2 withRemovedIndexes:(id)arg3 insertedIndexes:(id)arg4;
-(void)selectionCoordinator:(id)arg1 didUpdateSelectedObjectsWithRemovedOIDs:(id)arg2 insertedOIDs:(id)arg3;
-(void)selectionCoordinator:(id)arg1 rejectedCountLimitViolationForSelectionManager:(id)arg2;
-(void)selectionLimitStatusChangedForSelectionCoordinator:(id)arg1;

@end
