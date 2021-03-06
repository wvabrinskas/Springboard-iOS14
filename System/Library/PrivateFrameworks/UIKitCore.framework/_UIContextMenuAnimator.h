/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIContextMenuInteractionCommitAnimating.h>
#import <UIKit/UIContextMenuInteractionAnimating.h>

@class UIViewController, NSMutableArray, NSString;

@interface _UIContextMenuAnimator : NSObject <UIContextMenuInteractionCommitAnimating, UIContextMenuInteractionAnimating> {

	long long _preferredCommitStyle;
	UIViewController* _previewViewController;
	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,readonly) BOOL hasAnyActions; 
@property (nonatomic,readonly) NSMutableArray * animations;                           //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completions;                          //@synthesize completions=_completions - In the implementation block
@property (assign,nonatomic) long long preferredCommitStyle;                          //@synthesize preferredCommitStyle=_preferredCommitStyle - In the implementation block
@property (nonatomic,readonly) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animatorWithViewController:(id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(NSMutableArray *)animations;
-(void)setPreferredCommitStyle:(long long)arg1 ;
-(BOOL)hasAnyActions;
-(long long)preferredCommitStyle;
-(void)performAllAnimations;
-(NSMutableArray *)completions;
-(void)performAllCompletions;
-(UIViewController *)previewViewController;
@end

