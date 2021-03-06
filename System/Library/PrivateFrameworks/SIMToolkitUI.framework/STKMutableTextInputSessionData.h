/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMToolkitUI/STKTextInputSessionData.h>

@class NSString;

@interface STKMutableTextInputSessionData : STKTextInputSessionData

@property (nonatomic,copy) NSString * defaultText; 
@property (assign,nonatomic) BOOL isSecure; 
@property (assign,nonatomic) BOOL isDigitsOnly; 
@property (assign,nonatomic) unsigned long long minimumInputLength; 
@property (assign,nonatomic) unsigned long long maximumInputLength; 
-(void)setDefaultText:(NSString *)arg1 ;
-(void)setIsSecure:(BOOL)arg1 ;
-(void)setIsDigitsOnly:(BOOL)arg1 ;
-(void)setMinimumInputLength:(unsigned long long)arg1 ;
-(void)setMaximumInputLength:(unsigned long long)arg1 ;
@end

