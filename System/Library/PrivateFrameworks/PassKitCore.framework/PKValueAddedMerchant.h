/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding> {

	NSData* _identifier;
	long long _timesPresented;

}

@property (nonatomic,retain) NSData * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long timesPresented;              //@synthesize timesPresented=_timesPresented - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(void)setTimesPresented:(long long)arg1 ;
-(long long)timesPresented;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

