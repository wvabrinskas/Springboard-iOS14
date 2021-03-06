/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUIStatePresenting : PBCodable {

	int _presentationType;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) int presentationType;                  //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPresentationType:(int)arg1 ;
-(int)presentationType;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasPresentationType;
-(void)setHasPresentationType:(BOOL)arg1 ;
@end

