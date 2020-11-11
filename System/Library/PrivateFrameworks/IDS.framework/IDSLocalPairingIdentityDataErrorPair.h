/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding> {

	NSData* _identityData;
	NSError* _error;

}

@property (nonatomic,retain) NSData * identityData;              //@synthesize identityData=_identityData - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSData *)identityData;
-(id)initWithIdentityData:(id)arg1 error:(id)arg2 ;
-(id)initWithIdentityData:(id)arg1 ;
-(void)setIdentityData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
