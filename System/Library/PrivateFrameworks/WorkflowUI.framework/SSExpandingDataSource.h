/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/SSSectionedDataSource.h>

@interface SSExpandingDataSource : SSSectionedDataSource {

	/*^block*/id _collapsedSectionCountBlock;

}

@property (nonatomic,copy) id collapsedSectionCountBlock;              //@synthesize collapsedSectionCountBlock=_collapsedSectionCountBlock - In the implementation block
-(unsigned long long)numberOfItemsInSection:(long long)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)insertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isSectionExpandedAtIndex:(long long)arg1 ;
-(BOOL)isItemVisibleAtIndexPath:(id)arg1 ;
-(id)expandedSectionIndexes;
-(unsigned long long)numberOfCollapsedRowsInSection:(long long)arg1 ;
-(void)toggleSectionAtIndex:(long long)arg1 ;
-(void)setSection:(id)arg1 expanded:(BOOL)arg2 ;
-(void)setSectionAtIndex:(long long)arg1 expanded:(BOOL)arg2 ;
-(void)appendItems:(id)arg1 toSection:(long long)arg2 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 inSection:(long long)arg3 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2 ;
-(void)removeItemsInRange:(NSRange)arg1 inSection:(long long)arg2 ;
-(void)removeItemsAtIndexes:(id)arg1 inSection:(long long)arg2 ;
-(id)collapsedSectionCountBlock;
-(void)setCollapsedSectionCountBlock:(id)arg1 ;
@end

