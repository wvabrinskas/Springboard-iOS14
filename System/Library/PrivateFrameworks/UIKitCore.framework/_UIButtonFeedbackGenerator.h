/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@class _UIButtonFeedbackGeneratorConfiguration;

@interface _UIButtonFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (getter=_buttonConfiguration,nonatomic,readonly) _UIButtonFeedbackGeneratorConfiguration * buttonConfiguration; 
+(Class)_configurationClass;
-(void)userInteractionEnded;
-(id)_stats_key;
-(void)userInteractionStarted;
-(void)userInteractionCancelled;
-(id)initWithStyle:(long long)arg1 ;
-(id)_buttonConfiguration;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
@end
