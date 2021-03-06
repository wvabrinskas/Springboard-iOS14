/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(oneway void)release;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(Class)classForArchiver;
-(Class)classForKeyedArchiver;
-(void)invert;
-(void)addCharactersInString:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)allowsWeakReference;
-(id)retain;
-(BOOL)retainWeakReference;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)invertedSet;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(void)makeCharacterSetFast;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(unsigned long long)retainCount;
-(void)makeCharacterSetCompact;
-(id)bitmapRepresentation;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
@end

