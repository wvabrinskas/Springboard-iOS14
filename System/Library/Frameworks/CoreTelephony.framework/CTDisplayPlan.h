/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTPlan, NSString;

@interface CTDisplayPlan : NSObject <NSSecureCoding> {

	BOOL _isPhysical;
	CTPlan* _plan;
	NSString* _carrierName;
	NSString* _phoneNumber;
	NSString* _label;
	long long _status;
	unsigned long long _attributes;

}

@property (nonatomic,readonly) CTPlan * plan;                              //@synthesize plan=_plan - In the implementation block
@property (nonatomic,readonly) NSString * carrierName;                     //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL isPhysical;                            //@synthesize isPhysical=_isPhysical - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPlan:(id)arg1 status:(long long)arg2 attributes:(unsigned long long)arg3 isPhysical:(BOOL)arg4 carrierName:(id)arg5 phoneNumber:(id)arg6 label:(id)arg7 ;
-(BOOL)isPhysical;
-(NSString *)label;
-(long long)status;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)carrierName;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)attributes;
-(CTPlan *)plan;
@end

