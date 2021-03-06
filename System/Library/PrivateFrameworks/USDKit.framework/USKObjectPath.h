/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <USDKit/USDKit-Structs.h>
@interface USKObjectPath : NSObject {

	SdfPath _path;

}
-(id)initWithString:(id)arg1 ;
-(id)init;
-(id)stringValue;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(SdfPath)path;
-(id)propertyName;
-(id)tokenValue;
-(id)pathByAppendingPropertyComponent:(id)arg1 ;
-(id)initWithSdfPath:(SdfPath)arg1 ;
-(BOOL)isNodePath;
-(id)nodePath;
-(BOOL)isPropertyPath;
@end

