/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXListStyle : SXJSONObject

@property (nonatomic,readonly) unsigned long long style; 
@property (nonatomic,readonly) NSString * character; 
@property (nonatomic,readonly) SXJSONArray * indices; 
@property (nonatomic,readonly) unsigned long long depth; 
-(unsigned long long)depth;
-(SXJSONArray *)indices;
-(NSString *)character;
-(unsigned long long)style;
-(unsigned long long)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end

