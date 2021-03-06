/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWorkoutTrigger : WFTrigger {

	BOOL _onStart;
	BOOL _onEnd;
	unsigned long long _selection;
	NSArray* _selectedWorkoutTypes;

}

@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
@property (nonatomic,copy) NSArray * selectedWorkoutTypes;              //@synthesize selectedWorkoutTypes=_selectedWorkoutTypes - In the implementation block
@property (assign,nonatomic) BOOL onStart;                              //@synthesize onStart=_onStart - In the implementation block
@property (assign,nonatomic) BOOL onEnd;                                //@synthesize onEnd=_onEnd - In the implementation block
+(id)onIcon;
+(id)onLabel;
+(id)offLabel;
+(id)offIcon;
+(id)triggerTypeIcon;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(BOOL)isSupportedOnThisDevice;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(unsigned long long)contextStoreRegistrationIsForWatch;
-(id)init;
-(void)setSelection:(unsigned long long)arg1 ;
-(BOOL)onEnd;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)onStart;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)selection;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedWorkoutTypes;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedWorkoutTypes:(NSArray *)arg1 ;
-(void)setOnStart:(BOOL)arg1 ;
-(void)setOnEnd:(BOOL)arg1 ;
@end

