/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeInternalPropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
