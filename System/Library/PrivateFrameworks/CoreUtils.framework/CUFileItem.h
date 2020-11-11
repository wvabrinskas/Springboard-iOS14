/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUDictionaryCodable.h>

@class NSString;

@interface CUFileItem : NSObject <CUDictionaryCodable> {

	unsigned _flags;
	int _type;
	NSString* _name;
	long long _size;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned flags;              //@synthesize flags=_flags - In the implementation block
-(void)setSize:(long long)arg1 ;
-(unsigned)flags;
-(void)setType:(int)arg1 ;
-(long long)size;
-(NSString *)name;
-(void)encodeWithDictionary:(id)arg1 ;
-(id)description;
-(int)type;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
@end
