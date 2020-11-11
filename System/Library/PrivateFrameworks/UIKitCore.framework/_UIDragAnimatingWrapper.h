/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIDragAnimating.h>

@class UIViewPropertyAnimator, NSString;

@interface _UIDragAnimatingWrapper : NSObject <UIDragAnimating> {

	UIViewPropertyAnimator* _animator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)_api_addCompletion:(/*^block*/id)arg1 ;
-(id)initWithPropertyAnimator:(id)arg1 ;
@end
