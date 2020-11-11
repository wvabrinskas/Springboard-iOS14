/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (nonatomic,readonly) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) id second;              //@synthesize second=_second - In the implementation block
-(id)second;
-(id)init;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(unsigned long long)hash;
-(id)description;
-(void)getFirst:(id*)arg1 second:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)first;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
