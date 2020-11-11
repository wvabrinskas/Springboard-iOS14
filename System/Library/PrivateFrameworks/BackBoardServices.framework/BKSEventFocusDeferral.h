/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {

	int _priority;
	BKSEventFocusDeferralProperties* _properties;
	BKSEventFocusDeferralProperties* _deferredProperties;

}

@property (nonatomic,readonly) BKSEventFocusDeferralProperties * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) BKSEventFocusDeferralProperties * deferredProperties;              //@synthesize deferredProperties=_deferredProperties - In the implementation block
@property (nonatomic,readonly) int priority;                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL isCycle; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(BOOL)isCycle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)conciseDescription;
-(BKSEventFocusDeferralProperties *)properties;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)defersProperties:(id)arg1 ;
-(BKSEventFocusDeferralProperties *)deferredProperties;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 ;
-(id)deferredPropertiesForProperties:(id)arg1 ;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3 ;
-(int)priority;
-(id)initWithCoder:(id)arg1 ;
@end
