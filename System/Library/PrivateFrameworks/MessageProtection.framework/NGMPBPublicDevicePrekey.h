/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _prekey;
	NSData* _prekeySignature;

}

@property (nonatomic,retain) NSData * prekey;                       //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,retain) NSData * prekeySignature;              //@synthesize prekeySignature=_prekeySignature - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)prekeySignature;
-(void)setPrekeySignature:(NSData *)arg1 ;
-(NSData *)prekey;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrekey:(NSData *)arg1 ;
@end
