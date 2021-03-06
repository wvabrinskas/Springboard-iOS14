/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INObject.h>

@class NSString, INPerson, NSNumber;

@interface DeviceDetail : INObject

@property (copy,nonatomic) NSString * deviceName; 
@property (copy,nonatomic) NSString * deviceClass; 
@property (copy,nonatomic) NSString * productName; 
@property (copy,nonatomic) NSString * category; 
@property (assign,nonatomic) long long deviceLocality; 
@property (retain,nonatomic) INPerson * deviceOwner; 
@property (copy,nonatomic) NSString * emoji; 
@property (retain,nonatomic) NSNumber * isTheOnlyOneFound; 
@property (copy,nonatomic) NSString * productType; 
@property (retain,nonatomic) NSNumber * isEarbuds; 
@property (retain,nonatomic) NSNumber * isHeadphones; 
@property (copy,nonatomic) NSString * productNameSemantic; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
@end

