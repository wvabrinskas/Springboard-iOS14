/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOrthography.h>

@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {

	NSString* _dominantScript;
	NSDictionary* _languageMap;
	unsigned _orthographyFlags;

}
+(void)initialize;
-(id)dominantScript;
-(id)languageMap;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(void)dealloc;
@end
