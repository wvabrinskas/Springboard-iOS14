/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	BOOL _isPlugin;
	NSString* _bundleName;
	NSString* _bundleID;
	unsigned long long _installType;

}

@property (nonatomic,copy) NSString * bundleName;                         //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned long long installType;              //@synthesize installType=_installType - In the implementation block
@property (assign,nonatomic) BOOL isPlugin;                               //@synthesize isPlugin=_isPlugin - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)installType;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPlugin;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(Class)clientPromiseClass;
-(void)setIsPlugin:(BOOL)arg1 ;
@end

