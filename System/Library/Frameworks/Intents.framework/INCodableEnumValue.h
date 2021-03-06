/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableEnum, NSString, NSArray;

@interface INCodableEnumValue : NSObject <INCodableAttributeRelationComparing, NSSecureCoding, NSCopying, INCodableCoding> {

	INCodableEnum* _codableEnum;
	long long _index;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameLocID;
	NSArray* _synonyms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setCodableEnum:,nonatomic,__weak) INCodableEnum * _codableEnum;              //@synthesize codableEnum=_codableEnum - In the implementation block
@property (assign,nonatomic) long long index;                                                          //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocID;                                                //@synthesize displayNameLocID=_displayNameLocID - In the implementation block
@property (nonatomic,retain) NSArray * synonyms;                                                       //@synthesize synonyms=_synonyms - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(INCodableEnum *)_codableEnum;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSynonyms:(NSArray *)arg1 ;
-(NSArray *)synonyms;
-(NSString *)name;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(long long)index;
-(id)initWithCoder:(id)arg1 ;
-(void)_setCodableEnum:(id)arg1 ;
-(id)localizedDisplayNameForLanguage:(id)arg1 ;
-(id)__INCodableEnumSynonymsKey;
-(id)__INCodableEnumDisplayNameIDKey;
-(id)__INCodableEnumDisplayNameKey;
-(id)__INCodableEnumNameKey;
-(id)__INCodableEnumIndexKey;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayNameLocID;
-(NSString *)localizedDisplayName;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(void)setDisplayNameLocID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

