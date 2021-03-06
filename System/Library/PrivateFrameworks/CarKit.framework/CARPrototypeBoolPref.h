/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarKit/CARPrototypePref.h>

@interface CARPrototypeBoolPref : CARPrototypePref

@property (nonatomic,readonly) BOOL invertValueForState; 
@property (nonatomic,readonly) BOOL valueBool; 
@property (nonatomic,readonly) BOOL cachedValueBool; 
+(id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 invertValueForState:(BOOL)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
-(void)setCachedState:(BOOL)arg1 ;
-(void)setState:(BOOL)arg1 ;
-(BOOL)cachedState;
-(BOOL)cachedValueBool;
-(BOOL)state;
-(id)description;
-(BOOL)valueBool;
-(BOOL)invertValueForState;
@end

