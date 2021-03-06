/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MontrealLogIndent : NSObject {

	NSString* _step;
	unsigned long long _factor;
	NSString* _level;

}

@property (readonly) NSString * step;                        //@synthesize step=_step - In the implementation block
@property (readonly) unsigned long long factor;              //@synthesize factor=_factor - In the implementation block
@property (readonly) NSString * level;                       //@synthesize level=_level - In the implementation block
+(id)indentWithLevel:(id)arg1 ;
+(id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
-(id)indentByFactor:(unsigned long long)arg1 ;
-(unsigned long long)factor;
-(NSString *)step;
-(id)description;
-(id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3 ;
-(NSString *)level;
@end

