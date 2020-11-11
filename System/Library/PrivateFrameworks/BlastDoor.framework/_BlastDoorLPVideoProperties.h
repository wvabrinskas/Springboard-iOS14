/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _BlastDoorLPVideoProperties : NSObject <NSCopying> {

	BOOL _hasAudio;
	NSString* _accessibilityText;

}

@property (assign,nonatomic) BOOL hasAudio;                           //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAudio:(BOOL)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(BOOL)hasAudio;
-(NSString *)accessibilityText;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
