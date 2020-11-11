/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITableViewDragDelegate <NSObject>
@optional
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end
