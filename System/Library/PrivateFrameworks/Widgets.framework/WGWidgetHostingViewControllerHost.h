/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WGWidgetHostingViewControllerHost <NSObject>
@optional
-(BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1;
-(void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1;
-(BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1;
-(BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
-(BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1;

@end

