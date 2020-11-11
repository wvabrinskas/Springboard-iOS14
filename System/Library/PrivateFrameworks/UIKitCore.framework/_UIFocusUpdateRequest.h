/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusUpdateRequesting.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIFocusEnvironment;
@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator, NSString;

@interface _UIFocusUpdateRequest : NSObject <_UIFocusUpdateRequesting, NSCopying> {

	BOOL _allowsDeferral;
	BOOL _isFocusRemovalRequest;
	BOOL _shouldPlayFocusSound;
	BOOL _allowsFocusingCurrentItem;
	BOOL _allowsFocusRestoration;
	UIFocusAnimationCoordinator* _animationCoordinator;
	UIFocusSystem* _focusSystem;
	id<UIFocusEnvironment> _environment;

}

@property (nonatomic,readonly) BOOL isFocusRemovalRequest;                                    //@synthesize isFocusRemovalRequest=_isFocusRemovalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayFocusSound;                                       //@synthesize shouldPlayFocusSound=_shouldPlayFocusSound - In the implementation block
@property (assign,nonatomic) BOOL allowsFocusingCurrentItem;                                  //@synthesize allowsFocusingCurrentItem=_allowsFocusingCurrentItem - In the implementation block
@property (assign,nonatomic) BOOL allowsFocusRestoration;                                     //@synthesize allowsFocusRestoration=_allowsFocusRestoration - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * animationCoordinator;              //@synthesize animationCoordinator=_animationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> environment;                     //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL allowsDeferral;                                             //@synthesize allowsDeferral=_allowsDeferral - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                            //@synthesize focusSystem=_focusSystem - In the implementation block
@property (getter=isMovementRequest,nonatomic,readonly) BOOL movementRequest; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForRemovingFocusInFocusSystem:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)setAllowsDeferral:(BOOL)arg1 ;
-(BOOL)isFocusRemovalRequest;
-(void)setAllowsFocusRestoration:(BOOL)arg1 ;
-(void)setAllowsFocusingCurrentItem:(BOOL)arg1 ;
-(id)init;
-(BOOL)requiresEnvironmentValidation;
-(UIFocusSystem *)focusSystem;
-(id)initWithFocusSystem:(id)arg1 environment:(id)arg2 ;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(BOOL)requiresNextFocusedItem;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(void)setAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(BOOL)isMovementRequest;
-(BOOL)shouldPlayFocusSound;
-(id)requestByMergingWithRequest:(id)arg1 ;
-(BOOL)isValidInFocusSystem:(id)arg1 ;
-(id<UIFocusEnvironment>)environment;
-(void)cacheCurrentFocusSystem;
-(BOOL)allowsFocusRestoration;
-(void)setShouldPlayFocusSound:(BOOL)arg1 ;
-(BOOL)canMergeWithRequest:(id)arg1 ;
-(id)requestByRedirectingRequestToEnvironment:(id)arg1 ;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)allowsDeferral;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsFocusingCurrentItem;
@end
