/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SWMessage.h>
@class NSString, NSDictionary;


@protocol SWMessage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * body; 
@required
-(NSDictionary *)body;
-(NSString *)name;

@end


@class NSString, NSDictionary;

@interface SWMessage : NSObject <SWMessage> {

	NSString* _name;
	NSDictionary* _body;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * body;                 //@synthesize body=_body - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)body;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
@end

