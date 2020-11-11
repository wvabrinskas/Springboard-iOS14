/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {

	float _ctr;
	NSString* _personalizationFeatureId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasPersonalizationFeatureId; 
@property (nonatomic,retain) NSString * personalizationFeatureId;              //@synthesize personalizationFeatureId=_personalizationFeatureId - In the implementation block
@property (assign,nonatomic) BOOL hasCtr; 
@property (assign,nonatomic) float ctr;                                        //@synthesize ctr=_ctr - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(float)ctr;
-(unsigned long long)hash;
-(BOOL)hasCtr;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCtr:(float)arg1 ;
-(void)setPersonalizationFeatureId:(NSString *)arg1 ;
-(BOOL)hasPersonalizationFeatureId;
-(void)setHasCtr:(BOOL)arg1 ;
-(NSString *)personalizationFeatureId;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
