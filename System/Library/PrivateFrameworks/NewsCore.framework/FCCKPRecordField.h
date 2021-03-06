/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPRecordField : PBCodable <NSCopying> {

	FCCKPRecordFieldIdentifier* _identifier;
	FCCKPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) FCCKPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(FCCKPRecordFieldIdentifier *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdentifier:(FCCKPRecordFieldIdentifier *)arg1 ;
-(FCCKPRecordFieldValue *)value;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(FCCKPRecordFieldValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

