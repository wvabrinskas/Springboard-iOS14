/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXImportConcurrentAction.h>

@class NSArray, NSMutableArray, NSString, PXImportController, NSProgress;

@interface PXImportDeleteAction : PXImportConcurrentAction {

	NSArray* _assets;
	NSMutableArray* _removedAssets;
	BOOL _userInitiatedDelete;
	NSString* _sessionUuid;
	PXImportController* _importController;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSString * sessionUuid;                 //@synthesize sessionUuid=_sessionUuid - In the implementation block
@property (__weak) PXImportController * importController;              //@synthesize importController=_importController - In the implementation block
@property (assign) BOOL userInitiatedDelete;                           //@synthesize userInitiatedDelete=_userInitiatedDelete - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)finish;
-(void)start;
-(NSProgress *)progress;
-(void)_preAction;
-(id)initWithAssets:(id)arg1 ;
-(BOOL)canDeleteAssets;
-(void)_performRealAction;
-(void)_performMockAction;
-(void)didRemove:(id)arg1 ;
-(void)startObservingDeleteProgress;
-(void)stopObservingDeleteProgress;
-(NSString *)sessionUuid;
-(void)sendActionProgress:(double)arg1 ;
-(BOOL)userInitiatedDelete;
-(void)setUserInitiatedDelete:(BOOL)arg1 ;
-(id)performAction;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(PXImportController *)importController;
-(void)setImportController:(PXImportController *)arg1 ;
@end
