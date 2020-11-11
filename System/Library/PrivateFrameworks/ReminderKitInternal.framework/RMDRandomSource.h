/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
#import <libobjc.A.dylib/RMDRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMDRandomSource : NSObject <RMDRandom, NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(id)sharedRandom;
+(id)systemRandom;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(float)nextUniform;
-(id)arrayByShufflingObjectsInArray:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(long long)nextInt;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)nextBool;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
