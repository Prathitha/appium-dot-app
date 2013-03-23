//
//  NodeUtility.h
//  Appium
//
//  Created by Dan Cuellar on 3/3/13.
//  Copyright (c) 2013 Appium. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NodeInstance : NSObject

-(id) initWithPath:(NSString*)rootPath;
-(NSString*) pathToNodeBinary;

+(BOOL) instanceExistsAtPath:(NSString*)rootPath;
+(BOOL) packageIsInstalledAtPath:(NSString*)rootPath withName:(NSString*)packageName;

-(void) installPackage:(NSString*)packageName forceInstall:(BOOL)forceInstall;
-(NSString*) pathtoPackage:(NSString*)packageName;

@end
