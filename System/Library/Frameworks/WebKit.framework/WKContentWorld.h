/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKUserContentWorld, NSString;

@interface WKContentWorld : NSObject <WKObject> {

	ObjectStorage<API::ContentWorld> _contentWorld;

}

@property (nonatomic,copy,readonly) _WKUserContentWorld * _userContentWorld; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pageWorld;
+(id)defaultClientWorld;
+(id)worldWithName:(id)arg1 ;
-(_WKUserContentWorld *)_userContentWorld;
-(Object*)_apiObject;
-(NSString *)name;
-(void)dealloc;
@end

