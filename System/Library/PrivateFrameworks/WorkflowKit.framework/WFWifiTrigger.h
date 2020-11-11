/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWifiTrigger : WFTrigger {

	NSArray* _selectedNetworks;
	unsigned long long _selection;

}

@property (nonatomic,retain) NSArray * selectedNetworks;                //@synthesize selectedNetworks=_selectedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)init;
-(void)setSelection:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)selection;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedNetworks;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedNetworks:(NSArray *)arg1 ;
@end
