/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICanvasDefinition.h>

@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {

	UISceneSession* _sceneSession;

}

@property (nonatomic,retain) Class canvasSubclass; 
@property (nonatomic,retain) Class delegateClass; 
-(long long)systemType;
-(id)stateRestorationActivity;
-(id)userInfo;
-(Class)canvasSubclass;
-(Class)delegateClass;
-(void)setUserInfo:(id)arg1 ;
-(void)setCanvasSubclass:(Class)arg1 ;
-(void)setDelegateClass:(Class)arg1 ;
-(id)persistentIdentifier;
-(id)role;
-(id)initWithRepresentation:(id)arg1 ;
-(id)representedCanvas;
-(id)scene;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)configuration;
@end

