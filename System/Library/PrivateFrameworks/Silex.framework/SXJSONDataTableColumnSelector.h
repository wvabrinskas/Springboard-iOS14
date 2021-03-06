/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONDataTableSelector.h>
#import <libobjc.A.dylib/SXDataTableColumnSelector.h>

@class NSString;

@interface SXJSONDataTableColumnSelector : SXJSONDataTableSelector <SXDataTableColumnSelector>

@property (nonatomic,readonly) unsigned long long even; 
@property (nonatomic,readonly) unsigned long long odd; 
@property (nonatomic,readonly) unsigned long long rowIndex; 
@property (nonatomic,readonly) unsigned long long columnIndex; 
@property (nonatomic,readonly) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)odd;
-(unsigned long long)even;
-(unsigned long long)weightForSelectorKey:(id)arg1 ;
-(unsigned long long)evenWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)oddWithValue:(id)arg1 withType:(int)arg2 ;
@end

