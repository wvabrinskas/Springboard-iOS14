/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CXCallDirectoryEntryData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CXCallDirectoryPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding> {

	NSData* _phoneNumberData;

}

@property (nonatomic,retain) NSData * phoneNumberData;                     //@synthesize phoneNumberData=_phoneNumberData - In the implementation block
@property (nonatomic,readonly) const long long* phoneNumbers; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(const long long*)phoneNumbers;
-(NSData *)phoneNumberData;
-(long long)phoneNumberAtIndex:(unsigned long long)arg1 ;
-(void)setPhoneNumberData:(NSData *)arg1 ;
@end
