import { NativeModules } from 'react-native';

const { ReactExpo } = NativeModules;
ReactExpo.hello();

export default ReactExpo;
