/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageShotTypeResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	int _shotType;

}

@property (assign,nonatomic) int shotType;              //@synthesize shotType=_shotType - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(int)shotType;
-(void)setShotType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
