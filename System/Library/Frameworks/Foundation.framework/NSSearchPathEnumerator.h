/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@interface NSSearchPathEnumerator : NSEnumerator {

	long long state;
	unsigned long long directory;
	unsigned long long domainMask;

}
-(id)nextObject;
-(id)initWithDirectory:(unsigned long long)arg1 domains:(unsigned long long)arg2 ;
@end
