/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying> {

	NSData* _contentVersion;
	NSData* _metadataVersion;

}

@property (nonatomic,readonly) BOOL hasContentVersion; 
@property (nonatomic,retain) NSData * contentVersion;                //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataVersion; 
@property (nonatomic,retain) NSData * metadataVersion;               //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(id)stringFromVersion:(id)arg1 ;
+(id)versionFromString:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMetadataVersion:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasContentVersion;
-(BOOL)hasMetadataVersion;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentVersion:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)metadataVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)contentVersion;
@end
