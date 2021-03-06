/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionManager.h>

@class PXPhotosViewModel, NSDictionary, NSMapTable;

@interface PXPhotosGridActionManager : PXActionManager {

	PXPhotosViewModel* _viewModel;
	NSDictionary* _actionPerformersByType;
	NSMapTable* _actionTypeByBarButtonItem;

}

@property (nonatomic,__weak,readonly) PXPhotosViewModel * viewModel;                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionPerformersByType;               //@synthesize actionPerformersByType=_actionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSMapTable * actionTypeByBarButtonItem;              //@synthesize actionTypeByBarButtonItem=_actionTypeByBarButtonItem - In the implementation block
+(id)actionsWithActionPerformers;
-(NSMapTable *)actionTypeByBarButtonItem;
-(id)initWithViewModel:(id)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(PXPhotosViewModel *)viewModel;
-(id)init;
-(void)_handleBarButtonItem:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)barButtonItemForActionType:(id)arg1 ;
-(NSDictionary *)actionPerformersByType;
-(id)activityForActionType:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
@end

