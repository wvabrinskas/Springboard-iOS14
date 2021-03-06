/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXConditionHints;
@class SXLayoutOptions;

@interface SXDOMCacheKey : NSObject <NSCopying> {

	SXLayoutOptions* _options;
	id<SXConditionHints> _hints;

}

@property (nonatomic,readonly) SXLayoutOptions * options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id<SXConditionHints> hints;              //@synthesize hints=_hints - In the implementation block
-(SXLayoutOptions *)options;
-(BOOL)isEqual:(id)arg1 ;
-(id<SXConditionHints>)hints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLayoutOptions:(id)arg1 hints:(id)arg2 ;
@end

