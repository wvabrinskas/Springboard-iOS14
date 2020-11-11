/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _tokenRows;

}

@property (nonatomic,copy,readonly) NSArray * tokenRows;                //@synthesize tokenRows=_tokenRows - In the implementation block
@property (nonatomic,readonly) NSIndexSet * strokeIndexes; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSIndexSet *)strokeIndexes;
-(id)initWithTokenRows:(id)arg1 ;
-(NSArray *)tokenRows;
-(BOOL)isEqualToTokenizedTextResultColumn:(id)arg1 ;
-(long long)indexOfEquivalentTokenRow:(id)arg1 tokenRange:(NSRange)arg2 ;
-(BOOL)containsStartingTokenEquivalentToToken:(id)arg1 ;
@end
