/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXComponentInsertionCacheValidator.h>

@class NSString;

@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) id block;                            //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(BOOL)validateCache:(id)arg1 DOMObjectProvider:(id)arg2 ;
@end

