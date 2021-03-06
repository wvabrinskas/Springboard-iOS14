/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedApplicationName;
	NSString* _donationIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localizedApplicationName;              //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * donationIdentifier;                    //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
+(id)localizedApplicationNameForBundleIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDonationOrigin:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedApplicationName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)donationIdentifier;
-(id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

