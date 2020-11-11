/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _accountID;
	long long _slotID;
	NSString* _labelID;
	NSString* _label;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) NSString * labelID;                  //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long slotID;                  //@synthesize slotID=_slotID - In the implementation block
+(id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3 ;
+(BOOL)supportsSecureCoding;
-(long long)slotID;
-(NSString *)labelID;
-(void)setLabelID:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)accountID;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)context;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
