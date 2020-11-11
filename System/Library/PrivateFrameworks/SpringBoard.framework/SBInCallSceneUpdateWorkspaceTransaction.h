/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {

	SBApplicationSceneEntity* _applicationSceneEntity;
	/*^block*/id _postSceneUpdateHandler;

}

@property (nonatomic,copy) id postSceneUpdateHandler;              //@synthesize postSceneUpdateHandler=_postSceneUpdateHandler - In the implementation block
-(void)_begin;
-(id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 ;
-(void)setPostSceneUpdateHandler:(id)arg1 ;
-(id)postSceneUpdateHandler;
@end
