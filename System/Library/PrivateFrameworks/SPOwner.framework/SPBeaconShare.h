/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SPHandle, NSDate, NSString;

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding> {

	BOOL _accepted;
	NSUUID* _identifier;
	SPHandle* _handle;
	NSDate* _expiration;
	NSDate* _shareDate;
	unsigned long long _sharePrimaryIndex;
	NSString* _correlationIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                                     //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL accepted;                                       //@synthesize accepted=_accepted - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                                   //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * correlationIdentifier;                      //@synthesize correlationIdentifier=_correlationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * shareDate;                           //@synthesize shareDate=_shareDate - In the implementation block
@property (nonatomic,readonly) unsigned long long sharePrimaryIndex;              //@synthesize sharePrimaryIndex=_sharePrimaryIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(SPHandle *)arg1 ;
-(SPHandle *)handle;
-(unsigned long long)hash;
-(NSDate *)expiration;
-(void)setExpiration:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accepted;
-(NSString *)correlationIdentifier;
-(NSDate *)shareDate;
-(unsigned long long)sharePrimaryIndex;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 handle:(id)arg2 accepted:(BOOL)arg3 expiration:(id)arg4 correlationIdentifier:(id)arg5 shareDate:(id)arg6 sharePrimaryIndex:(unsigned long long)arg7 ;
@end

